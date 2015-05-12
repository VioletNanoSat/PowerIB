#define sample_size 20

static const double ocv_soc_lookup_X[128] = {
	
	// fill in values
	
};

double f[sample_size];

double h[sample_size];

double uf[sample_size];

double vf[sample_size];

double sampled_i[sample_size];

double sampled_v[sample_size];

double coulomb_count=0;

int SOC = 999;

unsigned int sample_counter = 0;

double max=0;

int max_index=0;

double OCV;

double SOCv=0;

double OCV;

// Table for converting ADC Values to Voltages
static const __flash uint16_t termVolt[72] = {
	10.4, 10.425, 10.45, 10.475,		
	10.5, 10.525, 10.55, 10.575,		
	10.6, 10.625, 10.65, 10.675,		
	10.7, 10.725, 10.75, 10.775, 
	10.8, 10.825, 10.85, 10.875, 
	10.9, 10.925, 10.95, 10.975, 
	11.0, 11.025, 11.05, 11.075, 
	11.1, 11.125, 11.15, 11.175,
	11.2, 11.225, 11.25, 11.275,
	11.3, 11.325, 11.35, 11.375,
	11.4, 11.425, 11.45, 11.475,
	11.5, 11.525, 11.55, 11.575,
	11.6, 11.625, 11.65, 11.675,
	11.7, 11.725, 11.75, 11.775,
	11.8, 11.825, 11.85, 11.875,
	11.9, 11.925, 11.95, 11.975,
	12.0, 12.025, 12.05, 12.075,
	12.1, 12.125, 12.15, 12.175
};


