__int64 __fastcall alacritty::migrate::write_results(__int64 a1, char a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 result; // rax
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __m256i v21; // [rsp+0h] [rbp-118h] BYREF
  void *v22; // [rsp+20h] [rbp-F8h]
  __int64 v23; // [rsp+28h] [rbp-F0h]
  __int16 v24; // [rsp+30h] [rbp-E8h]
  __m256i v25; // [rsp+38h] [rbp-E0h] BYREF
  void *v26; // [rsp+58h] [rbp-C0h]
  __m256i v27; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v28[24]; // [rsp+80h] [rbp-98h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-78h]
  __int64 v30; // [rsp+B0h] [rbp-68h]
  _QWORD v31[2]; // [rsp+C8h] [rbp-50h] BYREF
  _QWORD v32[8]; // [rsp+D8h] [rbp-40h] BYREF

  v31[0] = a5;
  v31[1] = a6;
  v10 = <&T as core::convert::AsRef<U>>::as_ref(a4);
  v32[0] = v10;
  v32[1] = v11;
  if ( (a2 & 1) != 0 )
  {
    if ( (a3 & 1) == 0 )
    {
      v25.m256i_i64[0] = (__int64)v32;
      v25.m256i_i64[1] = (__int64)<&T as core::fmt::Debug>::fmt;
      v25.m256i_i64[2] = (__int64)v31;
      v25.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
      v21.m256i_i64[0] = (__int64)&off_883740;
      v21.m256i_i64[1] = 4LL;
      v22 = &unk_103AB0;
      v23 = 3LL;
      v21.m256i_i64[2] = (__int64)&v25;
      v21.m256i_i64[3] = 2LL;
      std::io::stdio::_print(&v21);
    }
    goto LABEL_13;
  }
  v12 = v10;
  v13 = v11;
  v14 = std::path::Path::parent(v10, v11);
  if ( !v14 )
    core::option::unwrap_failed(&off_883780);
  v23 = 6LL;
  v21.m256i_i64[1] = (__int64)aTmp;
  v21.m256i_i64[2] = 4LL;
  v21.m256i_i64[3] = 1LL;
  v22 = 0LL;
  v24 = 0;
  v21.m256i_i32[0] = 0;
  tempfile::Builder::tempfile_in(&v25, &v21, v14, v15);
  if ( v25.m256i_i8[16] == 2 )
  {
    alacritty::migrate::write_results::{{closure}}(v28, v25.m256i_i64[0]);
    result = *(_QWORD *)&v28[16];
    v30 = *(_QWORD *)&v28[16];
    v17 = *(_OWORD *)v28;
    v29 = *(_OWORD *)v28;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v28[16];
    *(_OWORD *)a1 = v17;
    return result;
  }
  v27 = v25;
  v18 = std::fs::write(v25.m256i_i64[0], v25.m256i_i64[1], a5, a6);
  if ( v18 )
  {
    alacritty::migrate::write_results::{{closure}}(&v21, v18);
    v19 = v21.m256i_i64[0];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)&v21.m256i_u64[1];
    *(_QWORD *)a1 = v19;
    return core::ptr::drop_in_place<tempfile::file::NamedTempFile>(&v27);
  }
  v21 = v27;
  ((void (__fastcall *)(__m256i *, __m256i *, __int64, __int64))tempfile::file::NamedTempFile<F>::persist)(
    &v25,
    &v21,
    v12,
    v13);
  if ( v25.m256i_i8[24] == 2 )
  {
    v20 = v25.m256i_u32[0];
LABEL_12:
    core::ptr::drop_in_place<std::fs::File>(v20);
LABEL_13:
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  v22 = v26;
  v21 = v25;
  ((void (__fastcall *)(_BYTE *, __m256i *))alacritty::migrate::write_results::{{closure}})(v28, &v21);
  result = *(_QWORD *)v28;
  v20 = *(unsigned int *)&v28[8];
  *(_QWORD *)&v29 = *(_QWORD *)&v28[12];
  DWORD2(v29) = *(_DWORD *)&v28[20];
  if ( __OFSUB__(-*(_QWORD *)v28, 1LL) )
    goto LABEL_12;
  *(_DWORD *)(a1 + 20) = DWORD2(v29);
  *(_QWORD *)(a1 + 12) = v29;
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 8) = v20;
  return result;
}