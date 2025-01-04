__int64 __fastcall uu_env::string_expander::StringExpander::put_one_char(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v4; // [rsp+Ch] [rbp-2Ch] BYREF
  _BYTE v5[40]; // [rsp+10h] [rbp-28h] BYREF

  v4 = 0;
  v2 = core::char::methods::encode_utf8_raw(a2, &v4);
  <T as alloc::slice::hack::ConvertVec>::to_vec(v5, v2);
  return uu_env::string_expander::StringExpander::put_string(a1, v5);
}
