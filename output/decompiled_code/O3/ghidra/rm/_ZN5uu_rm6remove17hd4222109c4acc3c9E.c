byte __rustcall uu_rm::remove(long param_1,long param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_168;
  uint local_15c;
  char *local_158;
  undefined8 *local_150;
  code *local_148;
  long local_140;
  long local_138;
  undefined local_130 [16];
  undefined8 local_120;
  undefined local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined8 **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e0 [2];
  undefined8 local_d8;
  uint local_a8;
  
  local_138 = param_2 * 0x10 + param_1;
  local_140 = param_1;
  puVar6 = (undefined8 *)
           _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_140);
  if (puVar6 == (undefined8 *)0x0) {
    bVar7 = 0;
  }
  else {
    cVar1 = param_3[5];
    bVar5 = param_3[6];
    local_158 = param_3;
    if (*param_3 == '\0') {
      bVar7 = 0;
      local_15c = (uint)bVar5;
      do {
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        std::fs::symlink_metadata(local_e0,uVar2,uVar3);
        if (local_e0[0] == 2) {
          local_168 = local_d8;
                    /* try { // try from 001b7002 to 001b70cf has its CatchHandler @ 001b711e */
          local_130 = uucore::util_name();
          local_150 = (undefined8 *)local_130;
          local_148 = _<&T_as_core::fmt::Display>::fmt;
          local_110 = (undefined **)&DAT_00227d88;
          local_108 = 2;
          local_f0 = 0;
          local_100 = &local_150;
          local_f8 = 1;
          std::io::stdio::_eprint(&local_110);
          local_130._0_8_ = 1;
          local_118 = 1;
          local_150 = (undefined8 *)local_130;
          local_148 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_110 = &PTR_DAT_00227da8;
          local_108 = 2;
          local_f0 = 0;
          local_100 = &local_150;
          local_f8 = 1;
          local_130._8_8_ = uVar2;
          local_120 = uVar3;
          std::io::stdio::_eprint(&local_110);
          core::ptr::drop_in_place<std::io::error::Error>(&local_168);
          bVar5 = 1;
        }
        else if ((local_a8 & 0xf000) == 0x4000) {
          bVar5 = handle_dir(uVar2,uVar3,local_158);
        }
        else {
          bVar5 = remove_file(uVar2,uVar3,cVar1,local_15c);
        }
        bVar7 = bVar7 | bVar5;
        puVar6 = (undefined8 *)
                 _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                           (&local_140);
      } while (puVar6 != (undefined8 *)0x0);
    }
    else {
      bVar7 = 0;
      do {
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        std::fs::symlink_metadata(local_e0,uVar2,uVar3);
        if (local_e0[0] == 2) {
          local_168 = local_d8;
          core::ptr::drop_in_place<std::io::error::Error>(&local_168);
          bVar4 = 0;
        }
        else if ((local_a8 & 0xf000) == 0x4000) {
          bVar4 = handle_dir(uVar2,uVar3,local_158);
        }
        else {
          bVar4 = remove_file(uVar2,uVar3,cVar1,bVar5);
        }
        bVar7 = bVar7 | bVar4;
        puVar6 = (undefined8 *)
                 _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                           (&local_140);
      } while (puVar6 != (undefined8 *)0x0);
    }
  }
  return bVar7 & 1;
}