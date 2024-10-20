__int64 __fastcall uu_tr::operation::Sequence::from_str(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  char v7; // [rsp+Fh] [rbp-79h] BYREF
  __int64 v8; // [rsp+10h] [rbp-78h] BYREF
  __int64 v9; // [rsp+18h] [rbp-70h]
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+28h] [rbp-60h]
  __int64 v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  _QWORD v14[4]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v15[5]; // [rsp+60h] [rbp-28h] BYREF

  nom::multi::many0::{{closure}}(&v8, &v7, a2, a3);
  if ( v8 )
  {
    v3 = v10;
    v4 = v11;
    v5 = v12;
    if ( v9 != 3 )
    {
      v14[0] = v9;
      v14[1] = v10;
      v14[2] = v11;
      v14[3] = v12;
      core::result::unwrap_failed(aCalledResultUn_3, 43LL, v14, &unk_11DB50, &off_11DDF8);
    }
  }
  else
  {
    v3 = v11;
    v4 = v12;
    v5 = v13;
  }
  v15[0] = v4;
  v15[1] = v4;
  v15[2] = v3;
  v15[3] = v4 + 24 * v5;
  core::iter::adapters::try_process(a1, v15);
  return a1;
}
