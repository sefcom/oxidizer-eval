long __rustcall
uu_truncate::truncate_reference_and_size
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined **param_5,long param_6,undefined param_7)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int *local_138;
  code *local_130;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined local_100 [16];
  undefined8 local_f0;
  undefined **local_e8;
  undefined **ppuStack_e0;
  int **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_98;
  
  parse_mode_and_size(&local_158,param_3,param_4);
  if (local_158 == 3) {
    if (CONCAT44(uStack_14c,iStack_150) == 0) {
      pcVar3 = 
      "you must specify a relative \'--size\' with \'--reference\'cannot stat : No such file or directory"
      ;
      uVar2 = 0x37;
    }
    else {
      if (((iStack_150 != 5) && (iStack_150 != 6)) || (CONCAT44(uStack_144,local_148) != 0)) {
        std::fs::metadata(&local_e8,param_1,param_2);
        if ((int)local_e8 == 2) {
          lVar1 = truncate_reference_and_size::___closure__(param_1,param_2,ppuStack_e0);
          return lVar1;
        }
        uVar2 = TruncateMode::to_size
                          (CONCAT44(uStack_14c,iStack_150),CONCAT44(uStack_144,local_148),local_98);
        ppuStack_e0 = param_5 + param_6 * 3;
        local_e8 = param_5;
        do {
          lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_e8);
          if (lVar1 == 0) {
            return 0;
          }
          lVar1 = file_truncate(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),param_7,
                                uVar2);
        } while (lVar1 == 0);
        return lVar1;
      }
      pcVar3 = &DAT_00113d90;
      uVar2 = 0x10;
    }
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_e8,pcVar3,uVar2);
    local_d0 = CONCAT44(local_d0._4_4_,1);
    lVar1 = ::alloc::boxed::Box<T>::new(&local_e8);
  }
  else {
    local_118 = local_148;
    uStack_114 = uStack_144;
    uStack_110 = uStack_140;
    uStack_10c = uStack_13c;
    local_128 = local_158;
    uStack_124 = uStack_154;
    iStack_120 = iStack_150;
    uStack_11c = uStack_14c;
    local_138 = &local_128;
    local_130 = _<uucore::parser::parse_size::ParseSizeError_as_core::fmt::Display>::fmt;
    local_e8 = &PTR_s_Invalid_number__00216c98;
    ppuStack_e0 = (undefined **)0x1;
    local_c8 = 0;
    local_d8 = &local_138;
    local_d0 = 1;
                    /* try { // try from 001adb8c to 001adbc6 has its CatchHandler @ 001adc9f */
    core::option::Option<T>::map_or_else(local_100,&local_e8);
    local_d0 = CONCAT44(local_d0._4_4_,1);
    local_d8 = (int **)local_f0;
    lVar1 = ::alloc::boxed::Box<T>::new(&local_e8);
    core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(&local_128);
  }
  return lVar1;
}