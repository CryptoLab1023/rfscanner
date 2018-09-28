/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/nano/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-MMEname.h"

static int permitted_alphabet_table_1[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 2, 3, 4, 0, 5, 6, 7, 8, 9,	/* .      '() +,-./ */
10,11,12,13,14,15,16,17,18,19,20, 0, 0,21, 0,22,	/* 0123456789:  = ? */
 0,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,	/*  ABCDEFGHIJKLMNO */
38,39,40,41,42,43,44,45,46,47,48, 0, 0, 0, 0, 0,	/* PQRSTUVWXYZ      */
 0,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,	/*  abcdefghijklmno */
64,65,66,67,68,69,70,71,72,73,74, 0, 0, 0, 0, 0,	/* pqrstuvwxyz      */
};
static int permitted_alphabet_code2value_1[74] = {
32,39,40,41,43,44,45,46,47,48,49,50,51,52,53,54,
55,56,57,58,61,63,65,66,67,68,69,70,71,72,73,74,
75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,
97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,
113,114,115,116,117,118,119,120,121,122,};


static int check_permitted_alphabet_1(const void *sptr) {
	int *table = permitted_alphabet_table_1;
	/* The underlying type is PrintableString */
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

int
S1ap_MMEname_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 150)
		 && !check_permitted_alphabet_1(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_PER_MAP_S1ap_MMEname_1_v2c(unsigned int value) {
	if(value >= sizeof(permitted_alphabet_table_1)/sizeof(permitted_alphabet_table_1[0]))
		return -1;
	return permitted_alphabet_table_1[value] - 1;
}
static int asn_PER_MAP_S1ap_MMEname_1_c2v(unsigned int code) {
	if(code >= sizeof(permitted_alphabet_code2value_1)/sizeof(permitted_alphabet_code2value_1[0]))
		return -1;
	return permitted_alphabet_code2value_1[code];
}
/*
 * This type is implemented using PrintableString,
 * so here we adjust the DEF accordingly.
 */
static void
S1ap_MMEname_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_PrintableString.free_struct;
	td->print_struct   = asn_DEF_PrintableString.print_struct;
	td->ber_decoder    = asn_DEF_PrintableString.ber_decoder;
	td->der_encoder    = asn_DEF_PrintableString.der_encoder;
	td->xer_decoder    = asn_DEF_PrintableString.xer_decoder;
	td->xer_encoder    = asn_DEF_PrintableString.xer_encoder;
	td->uper_decoder   = asn_DEF_PrintableString.uper_decoder;
	td->uper_encoder   = asn_DEF_PrintableString.uper_encoder;
	td->aper_decoder   = asn_DEF_PrintableString.aper_decoder;
	td->aper_encoder   = asn_DEF_PrintableString.aper_encoder;
	td->compare        = asn_DEF_PrintableString.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_PrintableString.per_constraints;
	td->elements       = asn_DEF_PrintableString.elements;
	td->elements_count = asn_DEF_PrintableString.elements_count;
	td->specifics      = asn_DEF_PrintableString.specifics;
}

void
S1ap_MMEname_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	S1ap_MMEname_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
S1ap_MMEname_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	S1ap_MMEname_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
S1ap_MMEname_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	S1ap_MMEname_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
S1ap_MMEname_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	S1ap_MMEname_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
S1ap_MMEname_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	S1ap_MMEname_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
S1ap_MMEname_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	S1ap_MMEname_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
S1ap_MMEname_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	S1ap_MMEname_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
S1ap_MMEname_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	S1ap_MMEname_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
S1ap_MMEname_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	S1ap_MMEname_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_comp_rval_t * 
S1ap_MMEname_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	S1ap_MMEname_1_inherit_TYPE_descriptor(td1);
	S1ap_MMEname_1_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

asn_dec_rval_t
S1ap_MMEname_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	S1ap_MMEname_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_S1ap_MMEname_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  32,  122 }	/* (32..122) */,
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  8,  8,  1,  150 }	/* (SIZE(1..150,...)) */,
	asn_PER_MAP_S1ap_MMEname_1_v2c,	/* Value to PER code map */
	asn_PER_MAP_S1ap_MMEname_1_c2v	/* PER code to value map */
};
static ber_tlv_tag_t asn_DEF_S1ap_MMEname_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (19 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1ap_MMEname = {
	"S1ap-MMEname",
	"S1ap-MMEname",
	S1ap_MMEname_free,
	S1ap_MMEname_print,
	S1ap_MMEname_constraint,
	S1ap_MMEname_decode_ber,
	S1ap_MMEname_encode_der,
	S1ap_MMEname_decode_xer,
	S1ap_MMEname_encode_xer,
	S1ap_MMEname_decode_uper,
	S1ap_MMEname_encode_uper,
	S1ap_MMEname_decode_aper,
	S1ap_MMEname_encode_aper,
	S1ap_MMEname_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_MMEname_tags_1,
	sizeof(asn_DEF_S1ap_MMEname_tags_1)
		/sizeof(asn_DEF_S1ap_MMEname_tags_1[0]), /* 1 */
	asn_DEF_S1ap_MMEname_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_MMEname_tags_1)
		/sizeof(asn_DEF_S1ap_MMEname_tags_1[0]), /* 1 */
	&asn_PER_type_S1ap_MMEname_constr_1,
	0, 0,	/* No members */
	0	/* No specifics */
};

