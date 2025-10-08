void _ZN4just7signals3die17hb64eaa78d67e7dd0E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined8 local_238;
  undefined local_230 [16];
  undefined local_220 [512];
  
  local_238 = 0;
  (*(code *)PTR_memset_005660b0)(local_220,0,0x200);
  _ZN4just7signals3die28__u7b__u7b_closure_u7d__u7d_17h5c64d3748b64bdd1E
            (local_220,&local_238,&DAT_001717ec,7);
  _ZN4just7signals3die28__u7b__u7b_closure_u7d__u7d_17h5c64d3748b64bdd1E
            (local_220,&local_238,param_1,param_2);
  _ZN4just7signals3die28__u7b__u7b_closure_u7d__u7d_17h5c64d3748b64bdd1E
            (local_220,&local_238,&DAT_0016e198,1);
  auVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h54b2b72c1febbc46E
                     (0,local_238,local_220,0x200,&PTR_DAT_00530f50);
  _ZN3nix6unistd5write17hf31749d4a38336d7E(local_230,2,auVar2._0_8_,auVar2._8_8_);
  (*(code *)PTR__ZN3std7process5abort17h1e17b3ed8336d17dE_00566380)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}