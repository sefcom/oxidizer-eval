__int64 __fastcall uu_wc::files0_iter_stdin(__int64 a1)
{
  __int64 v1; // r14
  char v2; // dl
  char v3; // bp
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  __int128 v6; // [rsp+10h] [rbp-48h] BYREF
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  v5 = std::io::stdio::stdin();
  v1 = std::io::stdio::Stdin::lock(&v5);
  v3 = v2;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, asc_1A13E, 1LL);
  v7 = v9;
  v6 = v8;
  return uu_wc::files0_iter(a1, v1, v3 & 1, &v6);
}