long long change_log::domain::changelog::category_from_pr_type(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rdx

    v0 = v2;
    v3 = core::str::<impl str>::trim_end_matches(a0, a1);
    if ((char)v3.equal(v4, "feat[", 4))
    {
        return "FeaturesS";
    }
    else if ((char)v3.equal(v4, "fixchoreChoresFixes\n# Breaking\n\n- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# ", 3))
    {
        return "Fixes\n# Breaking\n\n- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# ";
    }
    else
    {
        return (((int)v3.equal(v4, "choreChoresFixes\n# Breaking\n\n- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# ", 5) & 255) ? "ChoresFixes\n# Breaking\n\n- \n\nMigration Notesscripts/change-log/src/domain/changelog.rs\t# " : 0);
    }
}
