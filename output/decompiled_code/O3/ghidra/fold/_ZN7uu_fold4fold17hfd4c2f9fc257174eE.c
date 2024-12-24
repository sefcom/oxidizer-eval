undefined  [16] __rustcall
uu_fold::fold(long param_1,long param_2,ulong param_3,undefined param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  char cVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined auVar7 [16];
  undefined local_ac [4];
  undefined8 local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined local_78 [16];
  undefined local_68 [56];
  
  param_3 = param_3 & 0xffffffff;
  local_80 = param_1 + param_2 * 0x18;
  local_88 = param_1;
  lVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_88);
  if (lVar4 != 0) {
    local_90 = param_5;
    if ((char)param_3 == '\0') {
      do {
        param_3 = *(ulong *)(lVar4 + 8);
        uVar1 = *(undefined8 *)(lVar4 + 0x10);
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_3,uVar1,"-",1);
        if (cVar3 == '\0') {
          std::fs::File::open(local_78,param_3,uVar1);
          _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
          ::map_err_context(&local_a0,local_78,param_3,uVar1);
          if (local_a0 != 0) goto LAB_001b1e6c;
          local_ac = (undefined  [4])local_98;
          ppuVar5 = &PTR_drop_in_place<std_fs_File>_0021bb68;
          puVar6 = (undefined8 *)local_ac;
          param_5 = local_90;
        }
        else {
          local_a8 = std::io::stdio::stdin();
          ppuVar5 = (undefined **)&DAT_0021bbc0;
          puVar6 = &local_a8;
        }
                    /* try { // try from 001b1e03 to 001b1e1c has its CatchHandler @ 001b1e75 */
        std::io::buffered::bufreader::BufReader<R>::with_capacity(local_68,0x2000,puVar6,ppuVar5);
        auVar7 = fold_file(local_68,param_4,param_5);
        if (auVar7._0_8_ != 0) goto LAB_001b1e58;
        if (cVar3 == '\0') {
          core::ptr::drop_in_place<std::fs::File>(local_ac);
        }
        lVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_88);
      } while (lVar4 != 0);
    }
    else {
      do {
        param_3 = *(ulong *)(lVar4 + 8);
        uVar1 = *(undefined8 *)(lVar4 + 0x10);
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_3,uVar1,"-",1);
        if (cVar3 == '\0') {
          std::fs::File::open(local_78,param_3,uVar1);
          _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
          ::map_err_context(&local_a0,local_78,param_3,uVar1);
          if (local_a0 != 0) {
LAB_001b1e6c:
            auVar7._12_4_ = uStack_94;
            auVar7._8_4_ = local_98;
            auVar7._0_8_ = local_a0;
            return auVar7;
          }
          local_ac = (undefined  [4])local_98;
          ppuVar5 = &PTR_drop_in_place<std_fs_File>_0021bb68;
          puVar6 = (undefined8 *)local_ac;
          param_5 = local_90;
        }
        else {
          local_a8 = std::io::stdio::stdin();
          ppuVar5 = (undefined **)&DAT_0021bbc0;
          puVar6 = &local_a8;
        }
                    /* try { // try from 001b1d0d to 001b1d26 has its CatchHandler @ 001b1e73 */
        std::io::buffered::bufreader::BufReader<R>::with_capacity(local_68,0x2000,puVar6,ppuVar5);
        auVar7 = fold_file_bytewise(local_68,param_4,param_5);
        if (auVar7._0_8_ != 0) {
LAB_001b1e58:
          if (cVar3 != '\0') {
            return auVar7;
          }
          core::ptr::drop_in_place<std::fs::File>(local_ac);
          return auVar7;
        }
        if (cVar3 == '\0') {
          core::ptr::drop_in_place<std::fs::File>(local_ac);
        }
        lVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_88);
      } while (lVar4 != 0);
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2 << 0x40;
}