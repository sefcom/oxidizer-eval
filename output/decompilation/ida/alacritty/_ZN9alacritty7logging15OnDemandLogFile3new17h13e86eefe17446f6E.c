__int64 __fastcall alacritty::logging::OnDemandLogFile::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int64 result; // rax
  __int128 *v8; // [rsp+8h] [rbp-B0h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+10h] [rbp-A8h]
  char v10; // [rsp+18h] [rbp-A0h]
  __int128 v11; // [rsp+20h] [rbp-98h] BYREF
  __int64 v12; // [rsp+30h] [rbp-88h]
  __int128 v13; // [rsp+40h] [rbp-78h] BYREF
  __int64 v14; // [rsp+50h] [rbp-68h]
  __int128 v15; // [rsp+58h] [rbp-60h] BYREF
  __int128 v16; // [rsp+68h] [rbp-50h]
  __int64 v17; // [rsp+78h] [rbp-40h]
  _BYTE v18[48]; // [rsp+88h] [rbp-30h] BYREF

  std::env::temp_dir(&v13, a2, a3, a4);
  LODWORD(v11) = std::process::id();
  v8 = &v11;
  v9 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
  *(_QWORD *)&v15 = &off_8831C0;
  *((_QWORD *)&v15 + 1) = 2LL;
  v17 = 0LL;
  *(_QWORD *)&v16 = &v8;
  *((_QWORD *)&v16 + 1) = 1LL;
  core::option::Option<T>::map_or_else(v18, 0LL, v4, &v15);
  std::path::PathBuf::push(&v13, v18);
  std::env::set_var(aAlacrittyLog, 13LL, *((_QWORD *)&v13 + 1), v14);
  v12 = v14;
  v11 = v13;
  *(_QWORD *)&v15 = 0x8000000000000000LL;
  v8 = (_OWORD *)(&dword_0 + 1);
  v9 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v10 = 0;
  v5 = alloc::boxed::Box<T>::new(&v8);
  v6 = v15;
  *(_OWORD *)(a1 + 40) = v16;
  *(_OWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 56) = v5;
  *(_OWORD *)a1 = v11;
  result = v12;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}