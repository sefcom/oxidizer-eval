undefined8
_ZN7uu_tail6follow5files12FileHandling13update_reader17haeff66f6ffe85304E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined local_48 [48];
  
  lVar2 = _ZN7uu_tail6follow5files12FileHandling7get_mut17h1a80ce1ee4fcf7dcE();
  _ZN3std2fs4File4open17hcbb28a04a46ba590E(&local_58,param_2,param_3);
  if (local_58 == 0) {
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17ha3ac34d0a7f10d70E
              (local_48,0x2000,local_54);
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf480b26787a6f5a3E(local_48);
    uVar3 = *(undefined8 *)(lVar2 + 200);
    uVar1 = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined8 *)(lVar2 + 200) = uVar4;
    *(undefined ***)(lVar2 + 0xd0) =
         &
         PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17ha419d633ac1ad1e3E_002bc4c8
    ;
    _ZN4core3ptr98drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT_17hb79f29454372363dE
              (uVar3,uVar1);
    uVar3 = 0;
  }
  else {
    uVar3 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                      (local_50);
  }
  return uVar3;
}