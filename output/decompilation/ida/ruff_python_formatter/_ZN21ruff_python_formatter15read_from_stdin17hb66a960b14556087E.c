__int64 __fastcall ruff_python_formatter::read_from_stdin(_QWORD *a1)
{
  char v1; // dl
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-30h]
  __int128 v6; // [rsp+10h] [rbp-28h] BYREF
  __int64 v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF

  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 1LL;
  v7 = 0LL;
  v8 = std::io::stdio::stdin();
  v4 = std::io::stdio::Stdin::lock(&v8);
  LOBYTE(v5) = v1 & 1;
  if ( (<std::io::stdio::StdinLock as std::io::Read>::read_to_string(&v4, &v6) & 1) != 0 )
  {
    a1[1] = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v2);
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(v4, v5);
    return core::ptr::drop_in_place<alloc::string::String>(v6, *((_QWORD *)&v6 + 1));
  }
  else
  {
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(v4, v5);
    result = v7;
    a1[2] = v7;
    *(_OWORD *)a1 = v6;
  }
  return result;
}