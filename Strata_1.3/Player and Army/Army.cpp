#include "Army.h"

Army::Army() {
	r_Archers.resize(0);
	r_Horsemen.resize(0);
	r_Knights.resize(0);
	r_Mages.resize(0);

	d_Archers.resize(0);
	d_Horsemen.resize(0);
	d_Knights.resize(0);
	d_Mages.resize(0);
}

int Army::count_potential() {
	int sum = 0;
	for (int i = 0; i < r_Archers.size(); ++i) {
		sum += r_Archers[i]->count_potential();
	}
	for (int i = 0; i < r_Horsemen.size(); ++i) {
		sum += r_Horsemen[i]->count_potential();
	}
	for (int i = 0; i < r_Knights.size(); ++i) {
		sum += r_Knights[i]->count_potential();
	}
	for (int i = 0; i < r_Mages.size(); ++i) {
		sum += r_Mages[i]->count_potential();
	}

	for (int i = 0; i < d_Archers.size(); ++i) {
		sum += d_Archers[i]->count_potential();
	}
	for (int i = 0; i < d_Horsemen.size(); ++i) {
		sum += d_Horsemen[i]->count_potential();
	}
	for (int i = 0; i < d_Knights.size(); ++i) {
		sum += d_Knights[i]->count_potential();
	}
	for (int i = 0; i < d_Mages.size(); ++i) {
		sum += d_Mages[i]->count_potential();
	}

	return sum;
}