__int64 __fastcall uu_env::string_expander::StringExpander::put_one_char(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v5; // [rsp+Ch] [rbp-2Ch] BYREF
  _BYTE v6[40]; // [rsp+10h] [rbp-28h] BYREF

  v5 = 0;
  v2 = core::char::methods::encode_utf8_raw(a2, &v5);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v6, v2, v3);
  return uu_env::string_expander::StringExpander::put_string(a1, v6);
}