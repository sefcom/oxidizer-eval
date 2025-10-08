__int64 __fastcall uu_sort::Output::into_write(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // r15
  unsigned int v6; // [rsp+4h] [rbp-24h] BYREF
  __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( __OFSUB__(0LL, *(_QWORD *)a2) )
  {
    v2 = std::io::stdio::stdout();
    v3 = alloc::boxed::Box<T>::new(v2);
    return std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a1, v3, &unk_18CC00);
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 24);
    v7[0] = std::fs::File::set_len(&v6, 0LL);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v7);
    v5 = alloc::boxed::Box<T>::new(v6);
    core::ptr::drop_in_place<alloc::string::String>(a2);
    return std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a1, v5, &off_18CC50);
  }
}