__int64 __fastcall uu_truncate::truncate_size_only(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v20; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int128 v31; // [rsp+0h] [rbp-178h] BYREF
  __int128 v32; // [rsp+10h] [rbp-168h]
  __int64 v33; // [rsp+20h] [rbp-158h]
  _QWORD v34[2]; // [rsp+38h] [rbp-140h] BYREF
  _QWORD v35[2]; // [rsp+48h] [rbp-130h] BYREF
  __int128 v36; // [rsp+58h] [rbp-120h] BYREF
  __int64 v37; // [rsp+68h] [rbp-110h]
  __int64 v38; // [rsp+70h] [rbp-108h] BYREF
  __int128 v39; // [rsp+78h] [rbp-100h]
  char v40; // [rsp+88h] [rbp-F0h]
  __int128 v41; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-D8h]
  int v43; // [rsp+C8h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+E0h] [rbp-98h]

  uu_truncate::parse_mode_and_size(&v31, a1, a2);
  if ( (_DWORD)v31 == 3 )
  {
    v8 = *((_QWORD *)&v31 + 1);
    v9 = v32;
    if ( *((_QWORD *)&v31 + 1) != 5LL && DWORD2(v31) != 6 || (_QWORD)v32 )
    {
      v34[0] = a3;
      v34[1] = a3 + 24 * a4;
      while ( 1 )
      {
        v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v34);
        if ( !v13 )
          return 0LL;
        v14 = v13;
        std::fs::metadata(&v41, v13);
        v18 = v41;
        if ( (_QWORD)v41 == 2LL )
        {
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
            2LL,
            *((_QWORD *)&v41 + 1));
          v10 = 0LL;
        }
        else
        {
          if ( (v43 & 0xF000) == 0x1000 )
          {
            v26 = *(_OWORD *)(v14 + 8);
            v38 = 0LL;
            v39 = v26;
            v40 = 1;
            v35[0] = &v38;
            v35[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v31 = &off_1165A0;
            *((_QWORD *)&v31 + 1) = 2LL;
            v33 = 0LL;
            *(_QWORD *)&v32 = v35;
            *((_QWORD *)&v32 + 1) = 1LL;
            ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
              &v36,
              &v31,
              v15,
              61440LL,
              v16,
              v17);
            DWORD2(v32) = 1;
            v31 = v36;
            *(_QWORD *)&v32 = v37;
            v20 = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
                    &v31,
                    &v31,
                    v27,
                    v28,
                    v29,
                    v30);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
              v18,
              *((_QWORD *)&v41 + 1));
            return v20;
          }
          v10 = v44;
        }
        v11 = uu_truncate::TruncateMode::to_size(v8, v9, v10);
        v12 = uu_truncate::file_truncate(*(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16), a5, v11);
        if ( v12 )
          return v12;
      }
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v41, aDivisionByZero, 16LL);
    DWORD2(v42) = 1;
    return alloc::boxed::Box<T>::new(
             &v41,
             aDivisionByZero,
             v22,
             v23,
             v24,
             v25,
             v31,
             *((_QWORD *)&v31 + 1),
             v32,
             *((_QWORD *)&v32 + 1));
  }
  else
  {
    v42 = v32;
    v41 = v31;
    return uu_truncate::truncate_size_only::{{closure}}(&v41);
  }
}
