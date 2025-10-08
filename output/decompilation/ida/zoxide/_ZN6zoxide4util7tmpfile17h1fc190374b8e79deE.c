__int64 __fastcall zoxide::util::tmpfile(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r15
  unsigned __int64 i; // rbp
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // r13
  _DWORD *v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  __int128 v12; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+18h] [rbp-A0h]
  _DWORD *v14; // [rsp+20h] [rbp-98h]
  _BYTE v15[20]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v16; // [rsp+3Ch] [rbp-7Ch]
  __int64 v17; // [rsp+48h] [rbp-70h] BYREF
  int v18; // [rsp+50h] [rbp-68h]
  char v19; // [rsp+54h] [rbp-64h]
  char v20; // [rsp+55h] [rbp-63h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  _QWORD v22[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-48h]
  _DWORD v24[2]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v25; // [rsp+80h] [rbp-38h]

  v14 = a1;
  v21 = <&T as core::convert::AsRef<U>>::as_ref(a2, a3);
  v4 = v3;
  for ( i = 0LL; ; ++i )
  {
    v22[0] = alloc::raw_vec::RawVecInner<A>::with_capacity_in(16LL, 1LL, 1LL, &off_134C00);
    v22[1] = v6;
    v23 = 0LL;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      v22,
      &unk_18E9C,
      &dword_18EA0);
    while ( v23 < 0x10 )
    {
      v7 = std::thread::local::LocalKey<T>::with();
      alloc::string::String::push(v22, v7);
    }
    std::path::Path::join(&v12, v21, v4, v22);
    v17 = 0x1B600000000LL;
    v19 = 0;
    v18 = 256;
    v20 = 1;
    std::fs::OpenOptions::open(v24, &v17, &v12);
    if ( v24[0] != 1 )
    {
      v16 = v13;
      *(_OWORD *)&v15[4] = v12;
      v9 = v14;
      *v14 = v24[1];
      result = *(_QWORD *)&v15[12];
      v11 = v16;
      *(_OWORD *)(v9 + 1) = *(_OWORD *)v15;
      *((_QWORD *)v9 + 2) = result;
      *((_QWORD *)v9 + 3) = v11;
      return result;
    }
    v8 = v25;
    if ( (unsigned __int8)std::io::error::Error::kind(v25) != 12 || i >= 4 )
      break;
    *(_QWORD *)v15 = v8;
    core::ptr::drop_in_place<std::io::error::Error>(v15);
    core::mem::drop(v12, *((_QWORD *)&v12 + 1));
  }
  *(_QWORD *)v15 = v8;
  *(_QWORD *)&v15[8] = 0x8000000000000000LL;
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
    v14,
    v15,
    *((_QWORD *)&v12 + 1),
    v13);
  return core::mem::drop(v12, *((_QWORD *)&v12 + 1));
}