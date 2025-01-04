void __rustcall uu_sort::tokenize_default(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined auVar5 [16];
  long local_40;
  long local_38;
  undefined8 local_30;
  
  ::alloc::vec::Vec<T,A>::push(param_3,0,0);
  local_38 = param_1 + param_2;
  local_30 = 0;
  local_40 = param_1;
  bVar2 = 1;
  do {
    bVar4 = bVar2;
    auVar5 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                       (&local_40);
    uVar3 = auVar5._8_4_;
    if (uVar3 == 0x20) {
LAB_00220c1f:
      bVar2 = 1;
      goto joined_r0x00220c74;
    }
    if (uVar3 == 0x110000) {
      if (*(long *)(param_3 + 0x10) != 0) {
        *(long *)(*(long *)(param_3 + 0x10) * 0x10 + -8 + *(long *)(param_3 + 8)) = param_2;
        return;
      }
      goto LAB_00220ca8;
    }
    if (uVar3 - 9 < 5) goto LAB_00220c1f;
    bVar2 = 0;
    if (0x7f < uVar3) {
      bVar2 = core::unicode::unicode_data::white_space::lookup(auVar5._8_8_ & 0xffffffff);
      bVar4 = bVar4 | ~bVar2;
joined_r0x00220c74:
      if ((bVar4 & 1) == 0) {
        if (*(long *)(param_3 + 0x10) == 0) {
          core::option::unwrap_failed(&PTR_s_src_uu_sort_src_sort_rs_002ffa28);
LAB_00220ca8:
          core::option::unwrap_failed(&PTR_s_src_uu_sort_src_sort_rs_002ffa10);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(long *)(*(long *)(param_3 + 0x10) * 0x10 + -8 + *(long *)(param_3 + 8)) = auVar5._0_8_;
        ::alloc::vec::Vec<T,A>::push(param_3,auVar5._0_8_,0);
        bVar2 = 1;
      }
    }
  } while( true );
}