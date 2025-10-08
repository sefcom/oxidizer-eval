__int64 __fastcall zoxide::util::canonicalize(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v4[48]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a2;
  dunce::canonicalize(v4, &v3);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(a1, v4, a2);
  return a1;
}