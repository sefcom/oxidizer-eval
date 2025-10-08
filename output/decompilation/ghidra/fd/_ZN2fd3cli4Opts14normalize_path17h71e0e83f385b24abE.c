void _ZN2fd3cli4Opts14normalize_path17h71e0e83f385b24abE
               (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined local_70 [64];
  
  puVar1 = PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00540860;
  if ((param_2 & 1) != 0) {
    (*(code *)PTR__ZN8normpath3imp9normalize17h59e357bf70bb8f7bE_00540858)(local_70,param_3,param_4)
    ;
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hbbd6404ac53aa6a5E(&local_b0,local_70);
                    /* try { // try from 002f149b to 002f14b4 has its CatchHandler @ 002f1554 */
    _ZN2fd10filesystem13absolute_path17h431e4f2ac32a5803E(local_70,local_a8,local_a0);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hbed88187ad4fe09dE(param_1,local_70);
    _ZN4core3ptr43drop_in_place_LT_fd__hyperlink__PathUrl_GT_17h2d976cf0ed371e6cE(local_b0,local_a8)
    ;
    return;
  }
  (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00540860)
            (&local_b0,param_3,param_4);
  (*(code *)puVar1)(local_70,"./",1);
  cVar2 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd9623c64792f17b1E
                    (&local_b0,local_70);
  if (cVar2 != '\0') {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc59efc0c75b13120E
              (param_1,
               "./cannot parse integer from empty stringinvalid digit found in stringnumber too large to fit in target typenumber too small to fit in target typenumber would be zero for non-zero type"
               ,2);
    return;
  }
  (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00540648)
            (param_1,param_3,param_4);
  return;
}