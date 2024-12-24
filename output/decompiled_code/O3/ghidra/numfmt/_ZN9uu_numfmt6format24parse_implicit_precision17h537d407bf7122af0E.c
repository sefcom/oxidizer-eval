undefined8 __rustcall
uu_numfmt::format::parse_implicit_precision(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_38;
  long local_30;
  undefined local_28;
  long local_20 [2];
  long local_10;
  long local_8;
  
  core::str::_<impl_str>::split_once(local_20,param_1,param_2);
  if (local_20[0] != 0) {
    local_30 = local_8 + local_10;
    local_38 = local_10;
    local_28 = 0;
    uVar1 = _<core::iter::adapters::take_while::TakeWhile<I,P>as_core::iter::traits::iterator::Iterator>
            ::fold(&local_38);
    return uVar1;
  }
  return 0;
}