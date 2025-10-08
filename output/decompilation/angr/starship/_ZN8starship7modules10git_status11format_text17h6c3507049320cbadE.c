long long starship::modules::git_status::format_text(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x109]
    unsigned long long v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    unsigned long long v3;  // [bp-0xf8]
    unsigned long v4;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xe8]
    char *v6;  // [bp-0xe0], Other Possible Types: char
    unsigned long long v7;  // [bp-0xd8]
    char *v8;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xc0]
    unsigned long long v10;  // [bp-0xb8]
    unsigned long long v11;  // [bp-0xb0]
    unsigned long long v12;  // [bp-0xa8]
    char *v13;  // [bp-0xa0]
    unsigned long long v14;  // [bp-0x98]
    void* v15;  // [bp-0x90]
    char v16;  // [bp-0x68]
    unsigned long long v18;  // rax

    v9 = "git_status.up_to_dategit_status.divergedahead_countbehind_countget_repo_status: git status execution failedget_stashed_count: git stash execution failedNew repo status created";
    v10 = 21;
    v16.new(a1, a2);
    if ((char)(((0 ^ *((long long *)&v16)) & (0 ^ -(*((long long *)&v16)))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<starship::formatter::string_formatter::StringFormatter,starship::formatter::string_formatter::StringFormatterError>>(&v16);
        v18 = (unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0);
        if (v18 > 1)
        {
            v8 = &v9;
            v6 = &v8;
            v7 = <&T as core::fmt::Display>::fmt;
            v11 = &g_11f4c00;
            v12 = 2;
            v15 = 0;
            v13 = &v6;
            v14 = 1;
            v1 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
            v2 = 29;
            v3 = "starship::modules::git_statusall_status$conflicted$stashed$deleted$renamed$modified$typechanged$staged$untrackedstashedahead_behindconflictedrenamedstageduntrackedtypechangedgit_status.typechangedgit_status.untrackedgit_status.stagedgit_status.modifiedgit_";
            v4 = 29;
            v5 = log::__private_api::loc(&g_11f4c20);
            v18 = (unsigned long long)log::__private_api::log(&v11, 2, &v1);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v18;
    }
    else
    {
        (char)v11.map(&v16, &v0);
        v6 = 2;
        (char)v1.parse(&(char)v11, &v6, a3);
        if (!((char)v1 & 1))
        {
            *((unsigned long *)&a0[16]) = v4;
            *((int128_t *)a0) = *((int128_t *)&v2);
            return v4;
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        return (unsigned long long)core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<starship::segment::Segment>,starship::formatter::string_formatter::StringFormatterError>>(&(char)v1);
    }
}
