__int64 __fastcall uu_tail::bounded_tail(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  char **v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+8h] [rbp-20h] BYREF

  result = *(_QWORD *)a2;
  switch ( *(_QWORD *)a2 )
  {
    case 0LL:
      uu_tail::backwards_thru_file(a1, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 16));
      goto LABEL_11;
    case 1LL:
      v10 = *(_QWORD *)(a2 + 8);
      if ( v10 >= 2 )
      {
        v11 = uu_tail::forwards_thru_file(a1, v10 - 1, *(_DWORD *)(a2 + 16));
        v13 = core::result::Result<T,E>::unwrap(v11, v12);
        v7 = <std::fs::File as std::io::Seek>::seek(a1, 0LL, v13);
        v9 = &off_1BBAD0;
LABEL_10:
        core::result::Result<T,E>::unwrap(v7, v8, v9);
      }
      goto LABEL_11;
    case 2LL:
LABEL_11:
      v18[0] = std::io::stdio::stdout();
      v17 = std::io::stdio::Stdout::lock(v18);
      v15 = <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(
              a1,
              &v17);
      core::result::Result<T,E>::unwrap(v15, v16, &off_1BBAE8);
      result = core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v17);
      break;
    case 3LL:
      return result;
    case 4LL:
      result = *(_QWORD *)(a2 + 8);
      switch ( result )
      {
        case 0LL:
          v3 = <std::fs::File as std::io::Seek>::seek(a1, 1LL, 0LL);
          v5 = core::result::Result<T,E>::unwrap(v3, v4, &off_1BBA70);
          v6 = core::cmp::min_by(*(_QWORD *)(a2 + 16), v5);
          v7 = <std::fs::File as std::io::Seek>::seek(a1, 1LL, -v6);
          v9 = &off_1BBA88;
          goto LABEL_10;
        case 1LL:
          v14 = *(_QWORD *)(a2 + 16);
          if ( v14 > 1 )
          {
            <std::fs::File as std::io::Seek>::seek(a1, 0LL, v14 - 1);
            JUMPOUT(0x100EA1LL);
          }
          goto LABEL_11;
        case 2LL:
          goto LABEL_11;
        case 3LL:
          return result;
      }
  }
  return result;
}
