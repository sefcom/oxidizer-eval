__int64 __fastcall uu_runcon::execute_command(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v7; // r14
  __int64 v8; // rbx
  bool v9; // cf
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // r13
  char v14; // bp
  __int64 v15; // r15
  _BYTE file[72]; // [rsp+8h] [rbp-170h] BYREF
  _BYTE v18[72]; // [rsp+50h] [rbp-128h] BYREF
  int v19; // [rsp+98h] [rbp-E0h]
  __int128 v20; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-C8h]
  _OWORD v22[2]; // [rsp+C0h] [rbp-B8h]
  _BYTE v23[28]; // [rsp+E0h] [rbp-98h]
  _OWORD v24[4]; // [rsp+100h] [rbp-78h] BYREF
  __int64 v25; // [rsp+140h] [rbp-38h]

  uu_runcon::os_str_to_c_string(file, a1, a2);
  if ( *(_DWORD *)file == 17 )
  {
    v7 = *(const char **)&file[8];
    v8 = *(_QWORD *)&file[16];
    core::iter::traits::iterator::Iterator::collect(file, a3, a3 + 24 * a4);
    if ( *(_DWORD *)file == 17 )
    {
      v20 = *(_OWORD *)&file[8];
      v21 = *(_QWORD *)&file[24];
      v9 = __CFADD__(a4, 2LL);
      v10 = a4 + 2;
      v11 = -1LL;
      if ( !v9 )
        v11 = v10;
      *(_QWORD *)file = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v11, 8LL, 8LL, &off_EBE38);
      *(_QWORD *)&file[8] = v12;
      *(_QWORD *)&file[16] = 0LL;
      alloc::vec::Vec<T,A>::push(file, v7, &off_EBE50);
      alloc::vec::Vec<T,A>::extend_trusted(file, *((_QWORD *)&v20 + 1), *((_QWORD *)&v20 + 1) + 16 * v21);
      alloc::vec::Vec<T,A>::push(file, 0LL, &off_EBE80);
      execvp(v7, *(char *const *__attribute__((__org_arrdim(0,0))) *)&file[8]);
      v13 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
      v14 = std::io::error::Error::kind(v13);
      uu_runcon::errors::Error::from_io1((__int64)v24, (__int64)aExecutingComma, 17LL, a1, a2, v13);
      *(_QWORD *)&v18[64] = v25;
      *(_OWORD *)&v18[48] = v24[3];
      *(_OWORD *)&v18[32] = v24[2];
      *(_OWORD *)&v18[16] = v24[1];
      *(_OWORD *)v18 = v24[0];
      v19 = (v14 == 0) + 126;
      v15 = alloc::boxed::Box<T>::new(v18);
      core::ptr::drop_in_place<alloc::vec::Vec<*const i8>>(*(_QWORD *)file, *(_QWORD *)&file[8]);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::ffi::c_str::CString>>(&v20);
    }
    else
    {
      *(_OWORD *)&v23[12] = *(_OWORD *)&file[16];
      *(_OWORD *)v23 = *(_OWORD *)&file[4];
      *(_QWORD *)&v18[64] = *(_QWORD *)&file[64];
      *(_OWORD *)&v18[48] = *(_OWORD *)&file[48];
      *(_OWORD *)&v18[32] = *(_OWORD *)&file[32];
      v22[0] = *(_OWORD *)&file[4];
      *(_OWORD *)((char *)v22 + 12) = *(_OWORD *)&v23[12];
      *(_OWORD *)&v18[4] = v22[0];
      *(_OWORD *)&v18[16] = *(_OWORD *)&v23[12];
      *(_DWORD *)v18 = *(_DWORD *)file;
      v19 = 1;
      v15 = alloc::boxed::Box<T>::new(v18);
    }
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v7, v8);
    return v15;
  }
  else
  {
    *(_OWORD *)&v18[56] = *(_OWORD *)&file[56];
    *(_OWORD *)&v18[40] = *(_OWORD *)&file[40];
    *(_OWORD *)&v18[24] = *(_OWORD *)&file[24];
    *(_QWORD *)v18 = *(_QWORD *)file;
    *(_OWORD *)&v18[8] = *(_OWORD *)&file[8];
    v19 = 1;
    return alloc::boxed::Box<T>::new(v18);
  }
}