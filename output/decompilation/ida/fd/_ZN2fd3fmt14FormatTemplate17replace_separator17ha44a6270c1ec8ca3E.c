unsigned __int64 __fastcall fd::fmt::FormatTemplate::replace_separator(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int128 v6; // rax
  char i; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rdx
  unsigned __int64 result; // rax
  _OWORD *v17; // rcx
  __int128 v20; // [rsp+10h] [rbp-148h] BYREF
  unsigned __int64 v21; // [rsp+20h] [rbp-138h]
  _QWORD *v22; // [rsp+28h] [rbp-130h]
  _BYTE v23[64]; // [rsp+30h] [rbp-128h] BYREF
  __int128 v24; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v25; // [rsp+80h] [rbp-D8h]
  __int128 v26; // [rsp+90h] [rbp-C8h]
  __int64 v27; // [rsp+A0h] [rbp-B8h]
  char v28; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+B1h] [rbp-A7h]
  __int128 v30; // [rsp+C1h] [rbp-97h]
  _BYTE v31[23]; // [rsp+D1h] [rbp-87h]
  _OWORD v32[7]; // [rsp+E8h] [rbp-70h] BYREF

  if ( a4 )
  {
    v22 = a1;
    *(_QWORD *)&v6 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a3, 1LL, 1LL, &off_4024A0);
    v20 = v6;
    v21 = 0LL;
    std::path::Path::components(v23, a2, a3);
    v32[3] = *(_OWORD *)&v23[48];
    v32[2] = *(_OWORD *)&v23[32];
    v32[1] = *(_OWORD *)&v23[16];
    v32[0] = *(_OWORD *)v23;
    for ( i = 11; ; i = v28 )
    {
      v28 = 11;
      if ( i == 11 )
      {
        <std::path::Components as core::iter::traits::iterator::Iterator>::next(v23, v32);
        if ( v23[0] == 10 )
          goto LABEL_19;
      }
      else
      {
        *(_QWORD *)&v23[48] = *(_QWORD *)&v31[15];
        *(_OWORD *)&v23[33] = *(_OWORD *)v31;
        *(_OWORD *)&v23[17] = v30;
        *(_OWORD *)&v23[1] = v29;
        v23[0] = i;
        if ( i == 10 )
        {
LABEL_19:
          result = v21;
          v17 = v22;
          v22[2] = v21;
          *v17 = v20;
          return result;
        }
      }
      v24 = *(_OWORD *)v23;
      v27 = *(_QWORD *)&v23[48];
      v26 = *(_OWORD *)&v23[32];
      v25 = *(_OWORD *)&v23[16];
      v8 = v23[0] - 5LL;
      if ( (unsigned __int8)(v23[0] - 6) >= 4u )
        v8 = 0LL;
      if ( v8 )
      {
        if ( v8 == 1
          || (v9 = std::path::Component::as_os_str(&v24),
              std::ffi::os_str::OsString::push(&v20, v9, v10),
              core::option::Option<T>::get_or_insert_with(&v28, v32),
              v28 != 10) )
        {
          std::ffi::os_str::OsString::push(&v20, a4, a5);
        }
      }
      else
      {
        if ( v23[0] == 4 )
        {
          v11 = *((_QWORD *)&v24 + 1);
          v12 = *((_QWORD *)&v25 + 1);
          v13 = v25;
          v14 = v26;
          std::ffi::os_str::OsString::push(&v20, a4, a5);
          std::ffi::os_str::OsString::push(&v20, a4, a5);
          std::ffi::os_str::OsString::push(&v20, v11, v13);
          std::ffi::os_str::OsString::push(&v20, a4, a5);
        }
        else
        {
          v12 = std::path::Component::as_os_str(&v24);
          v14 = v15;
        }
        std::ffi::os_str::OsString::push(&v20, v12, v14);
      }
    }
  }
  a1[1] = a2;
  a1[2] = a3;
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}