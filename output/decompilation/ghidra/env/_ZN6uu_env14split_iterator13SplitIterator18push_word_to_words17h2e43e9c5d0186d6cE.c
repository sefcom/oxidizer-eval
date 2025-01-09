void __rustcall uu_env::split_iterator::SplitIterator::push_word_to_words(undefined8 *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  local_8 = param_1[2];
  local_18 = *(undefined4 *)param_1;
  uStack_14 = *(undefined4 *)((long)param_1 + 4);
  uStack_10 = *(undefined4 *)(param_1 + 1);
  uStack_c = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  ::alloc::vec::Vec<T,A>::push(param_1 + 8,&local_18);
  return;
}