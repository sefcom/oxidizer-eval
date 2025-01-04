__int64 __fastcall uu_sort::Output::into_write(__int64 a1, __int128 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 (__fastcall **v4)(); // rcx
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned int v8; // [rsp+4h] [rbp-34h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  __int128 v10; // [rsp+10h] [rbp-28h] BYREF
  __int64 v11; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    v2 = std::io::stdio::stdout();
    v3 = alloc::boxed::Box<T>::new(v2);
    v4 = (__int64 (__fastcall **)())&unk_1FF6E8;
    v5 = v3;
  }
  else
  {
    v11 = *((_QWORD *)a2 + 2);
    v10 = *a2;
    v8 = *((_DWORD *)a2 + 6);
    v9 = std::fs::File::set_len(&v8, 0LL);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v9);
    v6 = alloc::boxed::Box<T>::new(v8);
    core::ptr::drop_in_place<alloc::string::String>(&v10);
    v4 = &off_1FF738;
    v5 = v6;
  }
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a1, 0x2000LL, v5, v4);
  return a1;
}
