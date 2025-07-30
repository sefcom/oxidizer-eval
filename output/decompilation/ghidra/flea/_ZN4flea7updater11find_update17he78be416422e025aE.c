uint * _ZN4flea7updater11find_update17he78be416422e025aE
                 (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  code *pcVar1;
  uint uVar2;
  undefined auStack_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  
  (*(code *)PTR__ZN3std3sys6os_str5bytes5Slice8to_owned17hc28911b40fe28e29E_008269d0)(auStack_e8);
                    /* try { // try from 00386033 to 003860a8 has its CatchHandler @ 003860e3 */
  _ZN3std4path7PathBuf4push17h236d17cf90268e08E(auStack_e8,param_4,param_5);
  _ZN3std2fs8metadata17h65666ff0bc69322aE(&local_d0,local_e0,local_d8);
  uVar2 = local_d0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h3fd70f9a0b8ae97aE
            (&local_d0);
  if (uVar2 == 2) {
    param_1[0] = 0;
    param_1[1] = 0x80000000;
  }
  else {
    (*(code *)
      PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17hb4876b8b08d05247E_00826798
    )(&local_d0,local_e0,local_d8);
    if ((local_d0 & 1) != 0) {
                    /* try { // try from 003860d4 to 003860e0 has its CatchHandler @ 003860e3 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)
                (&PTR_s_src_updater_rs_007f6268);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4f11c760132d323dE
              (&local_d0,CONCAT44(uStack_c4,uStack_c8),local_c0);
    *(undefined8 *)(param_1 + 4) = local_c0;
    *param_1 = local_d0;
    param_1[1] = uStack_cc;
    param_1[2] = uStack_c8;
    param_1[3] = uStack_c4;
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb8ab2c35932f4c39E(auStack_e8);
  return param_1;
}