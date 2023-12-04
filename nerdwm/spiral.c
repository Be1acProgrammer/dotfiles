void
spiral(Monitor *m) {
	Client *c;

	unsigned int n = 0, i = 0, nx = m->w.x, ny = m->w.y,
		     nw = m->w.width, nh = m->w.height;

	wl_list_for_each(c, &clients, link)
		if (VISIBLEON(c, m) && !c->isfloating && !c->isfullscreen)
			n++;

	if (n == 0)
		return;

	wl_list_for_each(c, &clients, link) {
		if (VISIBLEON(c, m) && !c->isfloating && !c->isfullscreen) {
			struct wlr_box box = {.x = nx, .y = ny,
					      .width = nw, .height = nh};
			if (++i < n) {
				if (i % 2 == 0)
					nh -= (box.height *= m->mfact);
				else
					nw -= (box.width *= m->mfact);
				switch (i % 4) {
				case 2: box.y += nh;
					break;
				case 3: box.x += nw;
					break;
				case 0: ny += box.height;
					break;
				case 1: nx += box.width;
					break;
				}
			}
			resize(c, box, 0);
		}
	}
}
