long __rustcall
uu_base32::base_common::fast_encode::write_without_line_breaks
          (long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE,char param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ::alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous();
  lVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,uVar1);
  if (lVar2 == 0) {
    if (param_4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x001c49a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*UNRECOVERED_JUMPTABLE)
                        (param_2,
                         "\n/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/vec_deque/mod.rs"
                         ,1);
      return lVar2;
    }
    ::alloc::collections::vec_deque::VecDeque<T,A>::truncate(param_1,0);
    lVar2 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return lVar2;
}