/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CrossCarrierSchedulingConfigLAA_UL_r14_H_
#define	_CrossCarrierSchedulingConfigLAA_UL_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ServCellIndex-r13.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CrossCarrierSchedulingConfigLAA-UL-r14 */
typedef struct CrossCarrierSchedulingConfigLAA_UL_r14 {
	ServCellIndex_r13_t	 schedulingCellId_r14;
	long	 cif_InSchedulingCell_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CrossCarrierSchedulingConfigLAA_UL_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CrossCarrierSchedulingConfigLAA_UL_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _CrossCarrierSchedulingConfigLAA_UL_r14_H_ */
#include <asn_internal.h>