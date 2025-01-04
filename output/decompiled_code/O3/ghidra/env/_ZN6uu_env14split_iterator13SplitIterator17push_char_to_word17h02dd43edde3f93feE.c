void __rustcall
uu_env::split_iterator::SplitIterator::push_char_to_word(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uStack_2c;
  undefined auStack_28 [24];
  
  uStack_2c = 0;
  uVar1 = core::char::methods::encode_utf8_raw(param_2,&uStack_2c);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(auStack_28,uVar1);
  string_expander::StringExpander::put_string(param_1,auStack_28);
  return;
}