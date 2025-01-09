undefined8 * __rustcall uu_sort::open(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  auVar5 = _<&T_as_core::convert::AsRef<U>>::as_ref(param_2,param_3);
  uVar4 = auVar5._8_8_;
  uVar2 = auVar5._0_8_;
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar2,uVar4,"-",1);
  if (cVar1 == '\0') {
    std::fs::File::open(&local_90,uVar2,uVar4);
    if (local_90 != 0) {
      local_80 = local_88;
                    /* try { // try from 00224ca9 to 00224cb9 has its CatchHandler @ 00224d28 */
      std::sys::pal::unix::os::split_paths::bytes_to_path(&local_78,uVar2,uVar4);
      local_40 = local_68;
      local_50 = local_78;
      uStack_4c = uStack_74;
      uStack_48 = uStack_70;
      uStack_44 = uStack_6c;
      local_58 = local_88;
      local_60[0] = 2;
      uVar2 = ::alloc::boxed::Box<T>::new(local_60);
      param_1[1] = uVar2;
      param_1[2] = &PTR_drop_in_place<uu_sort_SortError>_002ff678;
      *param_1 = 1;
      return param_1;
    }
    uVar2 = ::alloc::boxed::Box<T>::new(local_8c);
    param_1[1] = uVar2;
    ppuVar3 = &PTR_drop_in_place<std_fs_File>_002fff40;
  }
  else {
    uVar2 = std::io::stdio::stdin();
    uVar2 = ::alloc::boxed::Box<T>::new(uVar2);
    param_1[1] = uVar2;
    ppuVar3 = (undefined **)&DAT_002fff98;
  }
  param_1[2] = ppuVar3;
  *param_1 = 0;
  return param_1;
}