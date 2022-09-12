/*Below is the template for creating a zone.
zone_ban_hoang[] = { "This line is for the name of the zone beggening tieh the prefix 'zone'."

// All other lines are for creating connectors between zones which guide the enemy assualt and reinforcement scripts.
// "zone_hue" is the zone we want to connect to. "connector_ban_hoang_hue" references that the marker is a connector going from the root zone of this string
// being "ban_hoang" and connecting to the desired zone being "zone_hue".
	{"zone_hue", "connector_ban_hoang_hue"},
	{"zone_saigon", "connector_ban_hoang_saigon"}, 
	{"zone_da_nang", "connector_ban_hoang_da_nang"}
};*/

zone_nopala[] = {
	{"zone_piispa", "connector_nopala_piispa"},
	{"zone_pirunsarvi", "connector_nopala_pirunsarvi"},
};

zone_piispa[] = {
	{"zone_suuretvuoret", "connector_piispa_suuretvuoret"},
	{"zone_suopelto", "connector_piispa_suopelto"},
};

zone_leviakallio[] = {
	{"zone_klamila", "connector_leviakallio_klamila"},
};

zone_suuretvuoret[] = {
	{"zone_leviakallio", "connector_suuretvuoret_leviakallio"},
};

zone_suopelto[] = {
	{"zone_kuusela", "connector_suopelto_kuusela"},
	{"zone_suuretvuoret", "connector_suopelto_suuretvuoret"},
};

zone_pirunsarvi[] = {
	{"zone_piispa", "connector_pirunsarvi_piispa"},
	{"zone_haavisto", "connector_pirunsarvi_haavisto"},

};

zone_valkjarvi[] = {
	{"zone_pirunsarvi", "connector_valkjarvi_pirunsarvi"},
};

zone_haavisto[] = {
	{"zone_valkjarvi", "connector_haavisto_valkjarvi"},
};

zone_kannanmaki_west[] = {
	{"zone_yla_pihlaja", "connector_kannanmaki_west_yla_pihlaja"},
};

zone_kannanmaki_east[] = {
	{"zone_yla_pihlaja", "connector_kannanmaki_east_yla_pihlaja"},
	{"zone_kannanmaki_west", "connector_kannanmaki_east_kannanmaki_west"},
};

zone_uutela[] = {
	{"zone_haavisto", "connector_uutela_haavisto"},
	{"zone_suopelto", "connector_uutela_suopelto"},
	{"zone_yla_pihlaja", "connector_uutela_yla_pihlaja"},
	{"zone_kuusela", "connector_uutela_kuusela"},
};

zone_yla_pihlaja[] = {
	{"zone_ala_pihlaja", "connector_yla_pihlaja_ala_pihlaja"},
	{"zone_kuusela", "connector_yla_pihlaja_kuusela"},
	{"zone_harju", "connector_yla_pihlaja_harju"},
};

zone_kuusela[] = {
	{}
};

zone_lansikyla[] = {
	{}
};

zone_klamila[] = {
	{}
};

zone_jarvenkyla[] = {
	{"zone_tinkanen", "connector_jarvenkyla_tinkanen"},
	{"zone_kelkkaniemi", "connector_jarvenkyla_kelkkaniemi"},
	{"zone_lansikyla", "connector_jarvenkyla_lansikyla"},
	{"zone_klamila", "connector_jarvenkyla_klamila"},
};

zone_kelkkaniemi[] = {
	{}
};

zone_harju[] = {
	{}
};

zone_tinkanen[] = {
	{}
};

zone_santasaari[] = {
	{}
};

zone_siikasaari[] = {
	{}
};

zone_hanski[] = {
	{"zone_niemela", "connector_hanski_niemela"},
};

zone_niemela[] = {
	{}
};

zone_ravijoki[] = {
	{"zone_jarvenkyla", "connector_ravijoki_jarvenkyla"},
	{"zone_siikasaari", "connector_ravijoki_siikasaari"},
};

zone_hill_43[] = {
	{"zone_ala_pihlaja", "connector_hill_43_ala_pihlaja"},
};

zone_hill_52[] = {
	{"zone_hill_43", "connector_hill_52_hill_43"},
};

zone_ala_pihlaja[] = {
	{"zone_harju", "connector_ala_pihlaja_harju"},
	{"zone_ravijoki", "connector_ala_pihlaja_ravijoki"},
};

zone_kirkonkyla[] = {
	{"zone_selkarannankangas", "connector_kirkonkyla_selkarannankangas"},
	{"zone_eerikkala", "connector_kirkonkyla_eerikkala"},
	{"zone_hurppu", "connector_kirkonkyla_hurppu"},
	{"zone_hanski", "connector_kirkonkyla_hanski"},
	{"zone_niemela", "connector_kirkonkyla_niemela"},
};

zone_eerikkala[] = {
	{"zone_hanski", "connector_eerikkala_hanski"},
};

zone_selkarannankangas[] = {
	{"zone_hurppu", "connector_selkarannankangas_hurppu"}
};

zone_hurppu[] = {
	{}
};

zone_vilkkila[] = {
	{"zone_selkarannankangas", "connector_vilkkila_selkarannankangas"},
};

zone_quarry_east[] = {
	{"zone_vilkkila", "connector_quarry_east_vilkkila"},
};

zone_pyterlahti[] = {
	{"zone_hill_52", "connector_pyterlahti_hill_52"},
	{"zone_quarry_east", "connector_pyterlahti_quarry_east"},
	{"zone_vilkkila", "connector_pyterlahti_vilkkila"},
	{"zone_kirkonkyla", "connector_pyterlahti_kirkonkyla"},
};

zone_ylapaa[] = {
	{"zone_industrial_park", "connector_ylapaa_industrial_park"},
	{"zone_rus_outpost_1", "connector_ylapaa_rus_outpost_1"},
};

zone_myllynmaki[] = {
	{"zone_virojoki", "connector_myllynmaki_virojoki"}
	{"zone_ylapaa", "connector_myllynmaki_ylapaa"}
	{"zone_pyterlahti", "connector_myllynmaki_pyterlahti"}

};

zone_virojoki[] = {
	{"zone_pyterlahti", "connector_virojoki_pyterlahti"}
	{"zone_myllynmaki", "connector_virojoki_myllynmaki"}
	{"zone_pyterlahti", "connector_virojoki_pyterlahti"}
};

zone_rus_airbase[] = {
	{"zone_myllynmaki", "connector_rus_airbase_myllynmaki"}
};

zone_rus_outpost_1[] = {
	{}
};

zone_industrial_park[] = {
	{"zone_kannanmaki_east", "connector_industrial_park_kannanmaki_east"},
	{"zone_kannanmaki_west", "connector_industrial_park_kannanmaki_west"},
	{"zone_uutela", "connector_industrial_park_uutela"},
	{"zone_hill_52", "connector_industrial_park_hill_52"},
};

zone_pajunlahti[] = {
	{"zone_virojoki", "connector_pajunlahti_virojoki"},
};

zone_san_bay_ban[] = {};

zone_da_nang[] = {};

zone_ling_ho[] = {};
