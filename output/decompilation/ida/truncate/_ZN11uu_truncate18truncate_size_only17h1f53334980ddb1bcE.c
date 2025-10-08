__int64 __fastcall uu_truncate::truncate_size_only(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int8 v10; // bp
  __int64 v11; // r14
  __int64 v12; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  unsigned __int64 v31; // [rsp+8h] [rbp-170h]
  __int128 v32; // [rsp+10h] [rbp-168h] BYREF
  __int128 v33; // [rsp+20h] [rbp-158h]
  __int64 v34; // [rsp+30h] [rbp-148h]
  __int64 v35; // [rsp+40h] [rbp-138h]
  _QWORD v36[2]; // [rsp+48h] [rbp-130h] BYREF
  _QWORD v37[3]; // [rsp+58h] [rbp-120h] BYREF
  char v38; // [rsp+70h] [rbp-108h]
  __int128 v39; // [rsp+78h] [rbp-100h] BYREF
  __int64 v40; // [rsp+88h] [rbp-F0h]
  __int128 dest; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-D8h]
  int v43; // [rsp+C8h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+E0h] [rbp-98h]

  uu_truncate::parse_mode_and_size(&v32, a1, a2);
  if ( (_DWORD)v32 != 4 )
  {
    v42 = v33;
    dest = v32;
    return uu_truncate::truncate_size_only::{{closure}}(&dest);
  }
  v8 = *((_QWORD *)&v32 + 1);
  v31 = v33;
  if ( (*((_QWORD *)&v32 + 1) == 5LL || DWORD2(v32) == 6) && !(_QWORD)v33 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aDivisionByZero, 16LL);
    DWORD2(v42) = 1;
    return alloc::boxed::Box<T>::new(&dest, aDivisionByZero, v20, v21, v22, v23);
  }
  v9 = 24 * a4;
  v10 = a5;
  v11 = a3;
  v12 = 0LL;
  v35 = v11;
  while ( 1 )
  {
    if ( v9 == v12 )
      return 0LL;
    std::fs::metadata(&dest);
    v19 = dest;
    if ( (_QWORD)dest != 2LL )
      break;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2LL, *((_QWORD *)&dest + 1));
    v13 = 0LL;
LABEL_7:
    v14 = uu_truncate::TruncateMode::to_size(v8, v31, v13);
    result = uu_truncate::file_truncate(*(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16), v10, v14);
    v12 += 24LL;
    v11 += 24LL;
    if ( result )
      return result;
  }
  if ( (v43 & 0xF000) != 0x1000 )
  {
    v13 = v44;
    goto LABEL_7;
  }
  v24 = *(_QWORD *)(v35 + v12 + 8);
  v25 = *(_QWORD *)(v35 + v12 + 16);
  v37[0] = 0LL;
  v37[1] = v24;
  v37[2] = v25;
  v38 = 1;
  v36[0] = v37;
  v36[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v32 = &off_E4020;
  *((_QWORD *)&v32 + 1) = 2LL;
  v34 = 0LL;
  *(_QWORD *)&v33 = v36;
  *((_QWORD *)&v33 + 1) = 1LL;
  core::option::Option<T>::map_or_else(&v39, &v32, v16, v25, v17, v18);
  DWORD2(v33) = 1;
  v32 = v39;
  *(_QWORD *)&v33 = v40;
  v30 = alloc::boxed::Box<T>::new(&v32, &v32, v26, v27, v28, v29);
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v19, *((_QWORD *)&dest + 1));
  return v30;
}