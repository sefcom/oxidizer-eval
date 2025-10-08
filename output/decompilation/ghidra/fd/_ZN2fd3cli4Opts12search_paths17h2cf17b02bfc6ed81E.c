void _ZN2fd3cli4Opts12search_paths17h2cf17b02bfc6ed81E(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_30;
  long lStack_28;
  long local_20;
  
  lVar1 = 0xa0;
  if ((*(long *)(param_2 + 0xb0) == 0) && (lVar1 = 0xb8, *(long *)(param_2 + 200) == 0)) {
    lVar1 = _ZN2fd3cli31ensure_current_directory_exists17hea3f65f4cbc3c1ecE();
    if (lVar1 == 0) {
      plVar2 = (long *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
      if (plVar2 == (long *)0x0) {
        uVar3 = (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00540010)
                          (8,0x18);
                    /* catch() { ... } // from try @ 002f12ee with catch @ 002f133d */
        _ZN72__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h1c9d0e3b06bc073aE
                  ();
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar3);
      }
                    /* try { // try from 002f12ee to 002f1303 has its CatchHandler @ 002f133d */
      _ZN2fd3cli4Opts14normalize_path17h71e0e83f385b24abE
                (&local_30,*(undefined *)(param_2 + 0x1eb),
                 "./cannot parse integer from empty stringinvalid digit found in stringnumber too large to fit in target typenumber too small to fit in target typenumber would be zero for non-zero type"
                 ,2);
      plVar2[2] = local_20;
      *plVar2 = local_30;
      plVar2[1] = lStack_28;
      *param_1 = 1;
      param_1[1] = plVar2;
      param_1[2] = 1;
    }
    else {
      param_1[1] = lVar1;
      *param_1 = 0x8000000000000000;
    }
  }
  else {
    local_30 = *(long *)(param_2 + 8 + lVar1);
    lStack_28 = local_30 + *(long *)(param_2 + 0x10 + lVar1) * 0x18;
    local_20 = param_2;
    _ZN4core4iter6traits8iterator8Iterator7collect17hf49997e5ea1d6eb1E(param_1,&local_30);
  }
  return;
}