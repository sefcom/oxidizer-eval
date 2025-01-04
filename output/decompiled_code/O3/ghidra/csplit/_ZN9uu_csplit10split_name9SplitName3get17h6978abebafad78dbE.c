undefined8 __rustcall
uu_csplit::split_name::SplitName::get(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(local_50);
                    /* try { // try from 002bab65 to 002bab8f has its CatchHandler @ 002babe3 */
  uVar1 = uucore::features::format::Format<F>::fmt(param_2 + 0x18,local_50,param_3);
  core::result::Result<T,E>::unwrap(uVar1);
  ::alloc::string::String::from_utf8_lossy(local_38,local_48,local_40);
                    /* try { // try from 002bab9a to 002baba1 has its CatchHandler @ 002babca */
  _<alloc::borrow::Cow<str>as_alloc::string::ToString>::to_string(param_1,local_30,local_28);
                    /* try { // try from 002baba2 to 002babab has its CatchHandler @ 002babc5 */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_50);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_38);
  return param_1;
}