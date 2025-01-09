long __rustcall uu_dd::progress::ProgUpdate::write_io_lines(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int local_54;
  undefined **local_50;
  undefined8 local_48;
  undefined4 **local_40;
  ulong local_38;
  undefined8 uStack_30;
  int *local_20;
  code *local_18;
  
  lVar2 = ReadStat::report(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = WriteStat::report(param_1 + 0x30,param_2);
    if (lVar2 == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        lVar2 = 0;
      }
      else {
        if (iVar1 != 1) {
          local_20 = &local_54;
          local_18 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u32>::fmt;
          local_50 = (undefined **)&DAT_002622e8;
          local_48 = 2;
          local_40 = &local_20;
          local_54 = iVar1;
        }
        else {
          local_50 = &PTR_s_1_truncated_record_truncated_rec_002622d8;
          local_48 = 1;
          local_40 = (undefined4 **)&DAT_00000008;
        }
        uStack_30 = 0;
        local_38 = (ulong)(iVar1 != 1);
        lVar2 = _<std::io::stdio::Stderr_as_std::io::Write>::write_fmt(param_2,&local_50);
      }
    }
  }
  return lVar2;
}