import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    # return students.dropna(subset = ['name'])

    students = students[students['name'].notna()]
    return students