__int64 __fastcall bat::assets::build_assets::acknowledgements::license_not_needed_in_acknowledgements(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // ebp

  v2 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 48LL, 0LL);
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 48LL);
  v3 = v2;
  *v2 = aThisIsFreeAndU;
  v2[1] = 71LL;
  v2[2] = aDoWhatTheFuckY;
  v2[3] = 43LL;
  v2[4] = aPermissionToCo;
  v2[5] = 206LL;
  v4 = bat::assets::build_assets::acknowledgements::license_contains_marker(a1, a2, v2, 3LL);
  core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(3LL, v3);
  return v4;
}