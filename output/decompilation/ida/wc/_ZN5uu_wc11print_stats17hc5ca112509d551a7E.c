__int64 __fastcall uu_wc::print_stats(_BYTE *a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v8; // rcx
  char v9; // dl
  __int64 v10; // rsi
  char v11; // di
  char v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  char v15; // r11
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v22; // [rsp+8h] [rbp-150h] BYREF
  const char *v23; // [rsp+10h] [rbp-148h] BYREF
  __int64 v24; // [rsp+18h] [rbp-140h]
  __int64 v25; // [rsp+20h] [rbp-138h] BYREF
  char **v26; // [rsp+28h] [rbp-130h] BYREF
  __int64 v27; // [rsp+30h] [rbp-128h]
  const char ***v28; // [rsp+38h] [rbp-120h]
  __int128 v29; // [rsp+40h] [rbp-118h]
  __int64 v30; // [rsp+58h] [rbp-100h]
  __int64 v31; // [rsp+60h] [rbp-F8h]
  _QWORD v32[2]; // [rsp+68h] [rbp-F0h] BYREF
  const char **v33; // [rsp+78h] [rbp-E0h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+80h] [rbp-D8h]
  __int64 *v35; // [rsp+88h] [rbp-D0h]
  __int64 (__fastcall *v36)(); // [rsp+90h] [rbp-C8h]
  __int64 v37; // [rsp+98h] [rbp-C0h]
  __int16 v38; // [rsp+A0h] [rbp-B8h]
  _QWORD v39[2]; // [rsp+A8h] [rbp-B0h] BYREF
  char v40; // [rsp+B8h] [rbp-A0h]
  __int64 v41; // [rsp+C0h] [rbp-98h]
  char v42; // [rsp+C8h] [rbp-90h]
  __int64 v43; // [rsp+D0h] [rbp-88h]
  char v44; // [rsp+D8h] [rbp-80h]
  __int64 v45; // [rsp+E0h] [rbp-78h]
  char v46; // [rsp+E8h] [rbp-70h]
  __int64 v47; // [rsp+F0h] [rbp-68h]
  _QWORD v48[12]; // [rsp+F8h] [rbp-60h] BYREF

  v30 = a4;
  v31 = a3;
  v39[0] = std::io::stdio::stdout();
  v22 = std::io::stdio::Stdout::lock(v39);
  v8 = a2[2];
  v9 = a1[27];
  v10 = a2[3];
  v11 = a1[24];
  v12 = a1[25];
  v13 = *a2;
  v14 = a2[1];
  v15 = a1[28];
  v16 = a2[4];
  LOBYTE(v39[0]) = a1[26];
  v39[1] = v8;
  v40 = v9;
  v41 = v10;
  v42 = v12;
  v43 = v14;
  v44 = v11;
  v45 = v13;
  v46 = v15;
  v47 = v16;
  v23 = (_BYTE *)(&dword_0 + 1);
  v24 = 0LL;
  v32[0] = v39;
  v32[1] = v48;
  v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v32);
  if ( v17 )
  {
    if ( a5 > 0xFFFF )
    {
      v25 = v17 + 8;
      v26 = &off_F9348;
      v27 = 1LL;
      v28 = (const char ***)&byte_8;
      v29 = 0LL;
      core::panicking::panic_fmt(&v26, &off_F9368);
    }
    do
    {
      v25 = v17 + 8;
      v33 = &v23;
      v34 = <&T as core::fmt::Display>::fmt;
      v35 = &v25;
      v36 = <&T as core::fmt::Display>::fmt;
      v37 = 0LL;
      v38 = a5;
      v48[0] = &unk_1A470;
      v48[1] = 2LL;
      v48[4] = "\x02";
      v48[5] = 2LL;
      v48[2] = &v33;
      v48[3] = 3LL;
      v18 = std::io::Write::write_fmt(&v22, v48);
      if ( v18 )
        goto LABEL_9;
      v23 = asc_1A610;
      v24 = 1LL;
      v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v32);
    }
    while ( v17 );
  }
  v19 = v31;
  if ( !v31 )
    goto LABEL_8;
  v33 = &v23;
  v34 = <&T as core::fmt::Display>::fmt;
  v26 = (char **)&unk_187E0;
  v27 = 1LL;
  v28 = &v33;
  v29 = 1uLL;
  v18 = std::io::Write::write_fmt(&v22, &v26);
  if ( v18 )
  {
LABEL_9:
    v20 = v18;
    goto LABEL_10;
  }
  v20 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v22, v19, v30);
  core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000LL, v19);
  if ( !v20 )
  {
LABEL_8:
    v26 = (char **)&off_F9358;
    v27 = 1LL;
    v28 = (const char ***)&byte_8;
    v29 = 0LL;
    v18 = std::io::Write::write_fmt(&v22, &v26);
    goto LABEL_9;
  }
LABEL_10:
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v22);
  return v20;
}