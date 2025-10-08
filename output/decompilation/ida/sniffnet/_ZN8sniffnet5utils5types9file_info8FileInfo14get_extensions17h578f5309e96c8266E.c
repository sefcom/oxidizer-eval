const char **__fastcall sniffnet::utils::types::file_info::FileInfo::get_extensions(__int64 *a1, char a2)
{
  const char **result; // rax
  const char *v3; // rcx
  __int64 v4; // rcx

  switch ( a2 )
  {
    case 0:
      result = (const char **)alloc::alloc::Global::alloc_impl(8LL, 16LL, 0LL);
      if ( !result )
        goto LABEL_11;
      v3 = aTomlcellmoveke;
      goto LABEL_9;
    case 1:
      result = (const char **)alloc::alloc::Global::alloc_impl(8LL, 16LL, 0LL);
      if ( !result )
LABEL_11:
        alloc::alloc::handle_alloc_error(8LL, 16LL);
      v3 = aMmdb;
LABEL_9:
      *result = v3;
      result[1] = &byte_4;
      v4 = 1LL;
      break;
    case 2:
      result = (const char **)&byte_8;
      v4 = 0LL;
      break;
    case 3:
      result = (const char **)alloc::alloc::Global::alloc_impl(8LL, 48LL, 0LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 48LL);
      *result = aPcap;
      result[1] = &byte_4;
      result[2] = aPcapng;
      result[3] = &byte_6;
      result[4] = aCap;
      result[5] = (_BYTE *)(&dword_0 + 3);
      v4 = 3LL;
      break;
  }
  *a1 = v4;
  a1[1] = (__int64)result;
  a1[2] = v4;
  return result;
}