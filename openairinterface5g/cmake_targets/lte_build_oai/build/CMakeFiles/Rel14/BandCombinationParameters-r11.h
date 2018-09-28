/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_BandCombinationParameters_r11_H_
#define	_BandCombinationParameters_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandwidthCombinationSet-r10.h"
#include <NativeEnumerated.h>
#include "BandInfoEUTRA.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandCombinationParameters_r11__multipleTimingAdvance_r11 {
	BandCombinationParameters_r11__multipleTimingAdvance_r11_supported	= 0
} e_BandCombinationParameters_r11__multipleTimingAdvance_r11;
typedef enum BandCombinationParameters_r11__simultaneousRx_Tx_r11 {
	BandCombinationParameters_r11__simultaneousRx_Tx_r11_supported	= 0
} e_BandCombinationParameters_r11__simultaneousRx_Tx_r11;

/* Forward declarations */
struct BandParameters_r11;

/* BandCombinationParameters-r11 */
typedef struct BandCombinationParameters_r11 {
	struct BandCombinationParameters_r11__bandParameterList_r11 {
		A_SEQUENCE_OF(struct BandParameters_r11) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bandParameterList_r11;
	SupportedBandwidthCombinationSet_r10_t	*supportedBandwidthCombinationSet_r11	/* OPTIONAL */;
	long	*multipleTimingAdvance_r11	/* OPTIONAL */;
	long	*simultaneousRx_Tx_r11	/* OPTIONAL */;
	BandInfoEUTRA_t	 bandInfoEUTRA_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_multipleTimingAdvance_r11_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousRx_Tx_r11_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandParameters-r11.h"

#endif	/* _BandCombinationParameters_r11_H_ */
#include <asn_internal.h>
