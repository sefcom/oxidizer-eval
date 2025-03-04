undefined4 _ZN5uu_ls5dired20is_dired_arg_present17h5db040a2efd6cd73E(void)

{
  undefined4 uVar1;
  undefined local_50 [8];
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined local_28 [32];
  
  _ZN3std3env4args17hcc0787e3c3e9e7bbE(local_28);
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17ha8ea7375c2a5a1e7E
            (local_50,local_28);
  local_30 = local_48 + local_40 * 0x18;
  local_38 = local_48;
                    /* try { // try from 0025022c to 00250235 has its CatchHandler @ 0025024a */
  uVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h9b168894964f23d9E
                    (&local_38);
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hbaa87f9dbd448729E
            (local_50);
  return uVar1;
}