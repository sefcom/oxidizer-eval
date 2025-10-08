undefined8
_ZN7uu_tail6follow5files12FileHandling13update_reader17hba2c0912cd1385d3E
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
  
  lVar2 = _ZN7uu_tail6follow5files12FileHandling7get_mut17h1b58406c510d0063E();
  _ZN3std2fs4File4open17h45183e62b5972047E(&local_58,param_2,param_3);
  if (local_58 == 1) {
    uVar3 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0027d808
            )(local_50);
  }
  else {
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h293b79a640eb5f10E
              (local_48,local_54);
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf1e01b4c89005b4bE(local_48);
    uVar3 = *(undefined8 *)(lVar2 + 200);
    uVar1 = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined8 *)(lVar2 + 200) = uVar4;
    *(undefined ***)(lVar2 + 0xd0) =
         &
         PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17hdd2cb84096b06aabE_00273408
    ;
    _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h1ddfbf499f92a46cE
              (uVar3,uVar1);
    uVar3 = 0;
  }
  return uVar3;
}