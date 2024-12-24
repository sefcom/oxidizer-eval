undefined  [16] __rustcall uu_wc::count_fast::count_bytes_using_splice(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined local_c0;
  undefined uStack_bf;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  ulong local_98;
  
  local_c8 = 0x1b600000000;
  local_c0 = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bf = 1;
  std::fs::OpenOptions::open(&local_d8,&local_c8,&DAT_0011e436,9);
  if (local_d8 != 0) {
    core::ptr::drop_in_place<std::io::error::Error>(local_d0);
    lVar5 = 0;
    goto LAB_001b893d;
  }
  local_e0 = local_d4;
                    /* try { // try from 001b8843 to 001b88a4 has its CatchHandler @ 001b8976 */
  nix::sys::stat::fstat(&local_c8,local_d4);
  if ((int)local_c8 == 0) {
    if (((uint)(local_98 >> 0x20) & 0xfffff000 | (uint)(local_98 >> 8) & 0xfff) != 1)
    goto LAB_001b8933;
    cVar2 = core::cmp::impls::_<impl_core::cmp::PartialEq_for_u32>::ne
                      ((uint)(local_98 >> 0xc) & 0xffffff00 | (uint)local_98 & 0xff);
    if (cVar2 != '\0') goto LAB_001b8933;
    uVar4 = uucore::features::pipes::pipe();
    if ((int)uVar4 == -1) goto LAB_001b8933;
    local_d8 = (int)((ulong)uVar4 >> 0x20);
    lVar5 = 0;
    local_dc = (int)uVar4;
    do {
                    /* try { // try from 001b88d0 to 001b8910 has its CatchHandler @ 001b897b */
      nix::fcntl::splice(&local_c8,param_1,0,&local_d8,0,0x20000,0);
      if ((int)local_c8 != 0) break;
      lVar1 = CONCAT26(uStack_ba,
                       CONCAT24(uStack_bc,CONCAT22(uStack_be,CONCAT11(uStack_bf,local_c0))));
      if (lVar1 == 0) {
        core::ptr::drop_in_place<std::fs::File>(local_d8);
        core::ptr::drop_in_place<std::fs::File>(local_dc);
        core::ptr::drop_in_place<std::fs::File>(local_e0);
        uVar4 = 0;
        goto LAB_001b8942;
      }
      iVar3 = uucore::features::pipes::splice_exact(&local_dc,&local_e0,lVar1);
      lVar5 = lVar5 + lVar1;
    } while (iVar3 == 0x86);
    core::ptr::drop_in_place<std::fs::File>(local_d8);
    core::ptr::drop_in_place<std::fs::File>(local_dc);
    local_d4 = local_e0;
  }
  else {
LAB_001b8933:
    lVar5 = 0;
  }
  core::ptr::drop_in_place<std::fs::File>(local_d4);
LAB_001b893d:
  uVar4 = 1;
LAB_001b8942:
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}