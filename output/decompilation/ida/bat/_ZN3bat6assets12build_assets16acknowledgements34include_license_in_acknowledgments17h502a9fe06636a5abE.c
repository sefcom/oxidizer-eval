__int64 __fastcall bat::assets::build_assets::acknowledgements::include_license_in_acknowledgments(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // ebp

  v2 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 80LL, 0LL);
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 80LL);
  v3 = v2;
  *v2 = aTheAboveCopyri;
  v2[1] = 126LL;
  v2[2] = aRedistribution;
  v2[3] = 73LL;
  v2[4] = aApacheLicenseV;
  v2[5] = 72LL;
  v2[6] = aLicensedUnderT;
  v2[7] = 63LL;
  v2[8] = aCreativeCommon;
  v2[9] = 61LL;
  v4 = bat::assets::build_assets::acknowledgements::license_contains_marker(a1, a2, v2, 5LL);
  core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(5LL, v3);
  return v4;
}