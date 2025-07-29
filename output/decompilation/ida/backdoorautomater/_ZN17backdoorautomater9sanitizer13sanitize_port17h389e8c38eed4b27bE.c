__int64 __fastcall backdoorautomater::sanitizer::sanitize_port(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebp
  unsigned __int16 v7; // bp
  char **v9; // rsi
  __int128 v10; // [rsp+0h] [rbp-98h] BYREF
  __int64 v11; // [rsp+10h] [rbp-88h]
  __int128 v12; // [rsp+18h] [rbp-80h]
  _QWORD v13[4]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]

  regex::regex::string::Regex::new(&v10, a09_0, 7LL);
  core::result::Result<T,E>::unwrap(v13, &v10, &off_22A4B8);
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int8)regex::regex::string::Regex::is_match_at(v13[0], v13[1], v2, v3) )
  {
    *(_QWORD *)&v10 = &off_22A538;
    v9 = &off_22A548;
    goto LABEL_8;
  }
  v4 = core::str::<impl str>::trim_matches(v2, v3);
  v6 = core::num::<impl core::str::traits::FromStr for u16>::from_str(v4, v5);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, aErrorGivenPort, 33LL);
  v15 = v11;
  v14 = v10;
  <alloc::string::String as core::ops::arith::Add<&str>>::add(&v10, &v14, v2, v3);
  v7 = core::result::Result<T,E>::expect(v6, *((_QWORD *)&v10 + 1), v11);
  core::ptr::drop_in_place<alloc::string::String>(&v10);
  if ( !v7 )
  {
    *(_QWORD *)&v10 = &off_22A4E8;
    v9 = &off_22A4F8;
    goto LABEL_8;
  }
  if ( v7 == 0xFFFF )
  {
    *(_QWORD *)&v10 = &off_22A510;
    v9 = &off_22A520;
LABEL_8:
    *((_QWORD *)&v10 + 1) = 1LL;
    v11 = 8LL;
    v12 = 0LL;
    core::panicking::panic_fmt(&v10, v9);
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return core::ptr::drop_in_place<regex::regex::string::Regex>(v13);
}