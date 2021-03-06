// SPDX-License-Identifier: GPL-2.0
#ifndef PLANNER_H
#define PLANNER_H

#define LONGDECO 1
#define NOT_RECREATIONAL 2

#ifdef __cplusplus
extern "C" {
#endif

extern int validate_gas(const char *text, struct gasmix *gas);
extern int validate_po2(const char *text, int *mbar_po2);
extern timestamp_t current_time_notz(void);
extern void set_last_stop(bool last_stop_6m);
extern void set_verbatim(bool verbatim);
extern void set_display_runtime(bool display);
extern void set_display_duration(bool display);
extern void set_display_transitions(bool display);
extern int get_cylinderid_at_time(struct dive *dive, struct divecomputer *dc, duration_t time);
extern int get_gasidx(struct dive *dive, struct gasmix mix);
extern bool diveplan_empty(struct diveplan *diveplan);
extern void add_plan_to_notes(struct diveplan *diveplan, struct dive *dive, bool show_disclaimer, int error);

extern void free_dps(struct diveplan *diveplan);
extern struct dive *planned_dive;
extern char *cache_data;
extern char *disclaimer;

#ifdef __cplusplus
}
#endif
#endif // PLANNER_H
