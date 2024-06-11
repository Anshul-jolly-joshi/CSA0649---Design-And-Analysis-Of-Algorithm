def sum_subjects_backtracking(subjects, target_sum):
    def backtrack(start, path, current_sum):
        if current_sum == target_sum:
            print(path)
            return
        for i in range(start, len(subjects)):
            if current_sum + subjects[i] <= target_sum:
                backtrack(i + 1, path + [subjects[i]], current_sum + subjects[i])
    
    backtrack(0, [], 0)

# Example usage
subjects = [2, 3, 7, 8, 10]
target_sum = 18
sum_subjects_backtracking(subjects, target_sum)
