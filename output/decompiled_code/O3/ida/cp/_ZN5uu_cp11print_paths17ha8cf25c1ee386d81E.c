__int64 __fastcall uu_cp::print_paths(int a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(), _OWORD *a5)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // r13
  __int128 v10; // xmm0
  __int64 (__fastcall *v11)(); // rcx
  __int64 v12; // r15
  __int64 v13; // r12
  _OWORD *v14; // rbx
  __int64 (__fastcall *v15)(); // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  void *v21; // [rsp+0h] [rbp-108h]
  __int64 v22; // [rsp+8h] [rbp-100h]
  void *v23; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+18h] [rbp-F0h]
  void *v25; // [rsp+20h] [rbp-E8h]
  __int64 v26; // [rsp+28h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D8h]
  __int128 **v28; // [rsp+40h] [rbp-C8h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+48h] [rbp-C0h]
  __int128 *v30; // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall *v31)(); // [rsp+58h] [rbp-B0h]
  __int64 v32; // [rsp+60h] [rbp-A8h]
  __int64 v33; // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall *v34)(); // [rsp+70h] [rbp-98h]
  _OWORD *v35; // [rsp+78h] [rbp-90h]
  __int128 *v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+88h] [rbp-80h]
  __int128 ***v38; // [rsp+90h] [rbp-78h]
  __int64 (__fastcall *v39)(); // [rsp+98h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-58h]
  char v42; // [rsp+B8h] [rbp-50h]
  _QWORD v43[9]; // [rsp+C0h] [rbp-48h] BYREF

  if ( a1 )
  {
    v32 = a2;
    v33 = a3;
    v34 = a4;
    v35 = a5;
    uu_cp::aligned_ancestors(&v23);
    v21 = v23;
    v22 = v24;
    if ( v25 )
    {
      v8 = v24;
      v9 = v24 + 32LL * (_QWORD)v25;
      do
      {
        if ( !*(_QWORD *)v8 )
          break;
        v10 = *(_OWORD *)(v8 + 16);
        v11 = *(__int64 (__fastcall **)())(v8 + 8);
        v36 = *(__int128 **)v8;
        v37 = v11;
        v40 = v10;
        v28 = &v36;
        v29 = <std::path::Display as core::fmt::Display>::fmt;
        v30 = &v40;
        v31 = <std::path::Display as core::fmt::Display>::fmt;
        v23 = &unk_155570;
        v24 = 3LL;
        v27 = 0LL;
        v25 = &v28;
        v26 = 2LL;
        std::io::stdio::_print(&v23, a2, v5, v11, v6, v7);
        v8 += 32LL;
      }
      while ( v8 != v9 );
    }
    a5 = v35;
    a4 = v34;
    a3 = v33;
    a2 = v32;
    if ( v21 )
    {
      v12 = v33;
      v13 = v32;
      v14 = v35;
      v15 = v34;
      _rust_dealloc(v22, 32LL * (_QWORD)v21, 8LL);
      a2 = v13;
      a3 = v12;
      a4 = v15;
      a5 = v14;
    }
  }
  *(_QWORD *)&v40 = 1LL;
  *((_QWORD *)&v40 + 1) = a2;
  v41 = a3;
  v42 = 1;
  v28 = (__int128 **)(&dword_0 + 1);
  v29 = a4;
  v30 = a5;
  LOBYTE(v31) = 1;
  v36 = &v40;
  v37 = <os_display::Quoted as core::fmt::Display>::fmt;
  v38 = &v28;
  v39 = <os_display::Quoted as core::fmt::Display>::fmt;
  v23 = &anon_7947dff69a24cd925ba6dc87d49388a5_176_llvm_6903499209109998583;
  v24 = 2LL;
  v27 = 0LL;
  v25 = &v36;
  v26 = 2LL;
  alloc::fmt::format::format_inner(v43, &v23);
  v28 = (__int128 **)v43;
  v29 = <alloc::string::String as core::fmt::Display>::fmt;
  v23 = &unk_155338;
  v24 = 2LL;
  v27 = 0LL;
  v25 = &v28;
  v26 = 1LL;
  result = std::io::stdio::_print(&v23, &v23, v16, v17, v18, v19);
  if ( v43[0] )
    return _rust_dealloc(v43[1], v43[0], 1LL);
  return result;
}
